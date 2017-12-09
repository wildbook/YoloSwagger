#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Memory filter prints to the log when memory is allocated or freed that matches the filter parameters set in MemoryFilterSet
  void MemoryFilterEnable (const ClientInfo& info,
    //Enable/disable the memory filter
    const std::optional<int32_t>& enable = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/MemoryFilterEnable";
    Headers query;
    if({0})
      query["enable"] = *enable;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
