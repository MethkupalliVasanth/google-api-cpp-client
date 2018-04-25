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
class KeyCloakSample{


 public:
  googleapis::util::Status Startup(int argc, char* argv[]);
  void Run();

 private:

  OAuth2Credential credential_;
  std::unique_ptr<StorageService> storage_;
  std::unique_ptr<OAuth2ServiceAccountFlow> flow_;
  std::unique_ptr<HttpTransportLayerConfig> config_;
};




/* static */
util::Status KeyCloakSample::Startup(int argc, char* argv[]) {
  if ((argc < 2) || (argc > 3)) {
    return StatusInvalidArgument(usage);
  }

  // Set up HttpTransportLayer.
  googleapis::util::Status status;
  config_.reset(new HttpTransportLayerConfig);
  client::HttpTransportFactory* factory =
      new client::CurlHttpTransportFactory(config_.get());
  config_->ResetDefaultTransportFactory(factory);
  if (argc > 2) {
    config_->mutable_default_transport_options()->set_cacerts_path(argv[2]);
  }

  // Set up OAuth 2.0 flow for a service account.
  flow_.reset(new client::OAuth2ServiceAccountFlow(	
      config_->NewDefaultTransportOrDie()));
  // Load the the contents of the service_account.json into a string.
  string json(std::istreambuf_iterator<char>(std::ifstream(argv[1]).rdbuf()),
              std::istreambuf_iterator<char>());
  // Initialize the flow with the contents of service_account.json.
  flow_->InitFromJson(json);
  // Tell the flow exactly which scopes (priveleges) we need.




string store_path;
//need to set the store path for the secret JSON file generated from above to be used later for the credential store and authorization flow.
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







  flow_->set_default_scopes(StorageService::SCOPES::DEVSTORAGE_READ_ONLY);

  storage_.reset(new StorageService(config_->NewDefaultTransportOrDie()));
  return status;
}



void KeyCloakSample::Run() {

  credential_.set_flow(flow_.get());
  // Construct the request for running the Airavata API
  
  Json::Value value;
  // need to wrie implementation details of running the Airavata API using the credential store.
  //this can be taken from the client C++ SDKs.
}





util::Status KeyCloakSample::Curl() {

CURL *curl;
CURLcode res;

curl=curl_easy_init();

if(curl){

	curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:8080/auth/realms/master/protocol/openid-connect/token");//appropriate end point can be replaced
	curl_easy_setopt(curl, CURLOPT_POST, 1);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "client_id=client_account&client_secret=secret&username=user&password=password&grant_type=password");
res=curl_easy_perform(curl);
curl_easy_cleanup(curl);
return res





using namespace googleapis;
int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);

  KeycloakSample sample;
  googleapis::util::Status status = sample.Startup(argc, argv);
  // essentially creating the workflow and credential store, taking the status and checking
  if (!status.ok()) {
    std::cerr << "Could not initialize application." << std::endl;
    std::cerr << status.error_message() << std::endl;
    return -1;
  }
	
  sample.Curl();
  sample.Run();
  std::cout << "Done!" << std::endl;

  return 0;
}




