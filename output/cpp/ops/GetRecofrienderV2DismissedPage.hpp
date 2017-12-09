#pragma once
#include "../client.hpp"
#include "RecofrienderContactPaginationResource.hpp"
namespace leagueapi {
  RecofrienderContactPaginationResource_t GetRecofrienderV2DismissedPage (const ClientInfo& info,
    const uint64_t& start,
    const uint64_t& limit)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/recofriender/v2/dismissed/page";
    Headers query;
      query["start"] = start;
      query["limit"] = limit;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
