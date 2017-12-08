#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  //Retrieves the API declaration for a supported API
  nlohmann::json_t HttpApiDeclarationV1 (const ClientInfo& info,
    //API to get a declaration for
    const std::string_t& api)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/v1/api-docs/"+UrlCode::encode(to_string(api))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}