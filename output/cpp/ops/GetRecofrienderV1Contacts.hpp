#pragma once
#include "../client.hpp"
#include "RecofrienderContactResource.hpp"
namespace leagueapi {
  std::vector<RecofrienderContactResource_t> GetRecofrienderV1Contacts (const ClientInfo& info,
    const std::optional<uint64_t>& accountId = std::nullopt,
    const std::optional<std::string>& source = std::nullopt,
    const std::optional<std::string>& friendState = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/recofriender/v1/contacts";
    Headers query;
    if({0})
      query["accountId"] = *accountId;
    if({0})
      query["source"] = *source;
    if({0})
      query["friendState"] = *friendState;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
