#pragma once
#incldue "../client.hpp"
#include "RecofrienderContactStateResource.hpp"
namespace leagueapi {
  RecofrienderContactStateResource_t PostRecofrienderV1ContactsByAccountIdDismissed (const ClientInfo& info,
    const uint64_t_t& accountId,
    const std::optional<bool_t>& retainInCache = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/recofriender/v1/contacts/"+UrlCode::encode(to_string(accountId))+"/dismissed";
    bool first = true;
    if(retainInCache) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("retainInCache="+UrlCode::encode(to_string(*retainInCache)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
