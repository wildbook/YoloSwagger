#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Returns current memory usage by callstack site
  nlohmann::json MemoryUsage (const ClientInfo& info,
    //Minimum size of total allocations at call site in order to print (optional: MEMORYUSAGE_MINSIZE default)
    const std::optional<uint32_t>& minSize = std::nullopt,
    //Minimum count of total allocations at call site in order to print (optional: MEMORYUSAGE_MINCOUNT default)
    const std::optional<uint32_t>& minCount = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/MemoryUsage";
    Headers query;
    if({0})
      query["minSize"] = *minSize;
    if({0})
      query["minCount"] = *minCount;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
