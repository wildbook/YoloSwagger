#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t PostPatcherV1ProductsByProductIdSignalStartPatchingDelayed (const ClientInfo& info,
    const std::string_t& product-id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/patcher/v1/products/"+UrlCode::encode(to_string(product-id))+"/signal-start-patching-delayed";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
