#include <curl/curl.h>
#include <iostream>
#include <stdio.h>
#include "googleapis/client/auth/file_credential_store.h"
#include "googleapis/client/auth/oauth2_authorization.h"
#include "googleapis/client/transport/https_authorization.h"

using googleapis_client::CredentialStore;
using googleapis_client::FIleCredentialStoreFactory;
using googleapis_client::OAuth2AuthorizationFlow;
using googleapis_client::OAuth2Credential;
using googleapis_client::OAuth2RequestOptions;





using namespace std;

int main(){

CURL *curl;
CURLcode res;

curl=curl_easy_init();

if(curl){

	curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:8080/auth/realms/master/protocol/openid-connect/token");
	curl_easy_setopt(curl, CURLOPT_POST, 1);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "client_id=client_account&client_secret=secret&username=user&password=password&grant_type=password");
res=curl_easy_perform(curl);
curl_easy_cleanup(curl);




string store_path;
googleapis::util::Status status= FileCredentialStoreFactory::GetSystemHomeDirectoryStorePath(&store_path);


flow_.reset(OAuth2AuthorizationFlow::MakeFlowFromClientSecretsJson(res, transport, &status));
CHECK(status.ok())<< status.error_message();





if(status.ok()){
	FileCredentialStoreFactory store_factory(store_path);
	flow_->ResetCredentialSotre(store_factory.NewCredentialStore("KeyCloakSample", &status));
}
if(!status.ok()){
	LOG(ERROR)
		<< "FAILED CREATING CREDENTIAL STORE:"<< status.error_message();
}

//saving a credential to the credential store

status=credential_store->Store(user_id, credential);
if(!status.ok()){
	LOG(ERROR) << "Failed Storing credentials:"<< status.error_message();
}



}
return 0;
}
