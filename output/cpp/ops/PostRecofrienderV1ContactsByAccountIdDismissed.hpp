#pragma once
#include "../client.hpp"
#include "RecofrienderContactStateResource.hpp"
namespace leagueapi {
  RecofrienderContactStateResource_t PostRecofrienderV1ContactsByAccountIdDismissed (const ClientInfo& info,
    const uint64_t& accountId,
    const std::optional<bool>& retainInCache = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/recofriender/v1/contacts/"+UrlCode::encode(to_string(accountId))+"/dismissed";
    Headers query;
    if({0})
      query["retainInCache"] = *retainInCache;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
