#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t DeletePatcherV1ProductsByProductIdByComponentIdHttpHeaders (const ClientInfo& info,
    const std::string_t& product-id,
    const std::string_t& component-id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/patcher/v1/products/"+UrlCode::encode(to_string(product-id))+"/"+UrlCode::encode(to_string(component-id))+"/http-headers";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}