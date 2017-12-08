#pragma once
#incldue "../client.hpp"
#include "RecofrienderContactPaginationResource.hpp"
namespace leagueapi {
  RecofrienderContactPaginationResource_t GetRecofrienderV2DismissedPage (const ClientInfo& info,
    const uint64_t_t& start,
    const uint64_t_t& limit)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/recofriender/v2/dismissed/page?start=" + UrlCode::encode(to_string(start))    +
    "&limit=" + UrlCode::encode(to_string(limit));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}