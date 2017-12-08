#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t DeleteRecofrienderV1RegistrationsByNetwork (const ClientInfo& info,
    const std::string_t& network)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/recofriender/v1/registrations/"+UrlCode::encode(to_string(network))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
