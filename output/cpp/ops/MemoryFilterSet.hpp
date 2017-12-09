#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Sets the filter parameters for when to print to the log. Use MemoryFilterEnable to start/stop the print outs
  void MemoryFilterSet (const ClientInfo& info,
    //Optional filter for minimum size to output
    const std::optional<uint32_t>& minSize = std::nullopt,
    //Optional filter for maximum size to output
    const std::optional<uint32_t>& maxSize = std::nullopt,
    //Optional filter for minimum address in hex to output
    const std::optional<std::string>& minAddress = std::nullopt,
    //Optional filter for maximum address in hex to output
    const std::optional<std::string>& maxAddress = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/MemoryFilterSet";
    Headers query;
    if({0})
      query["minSize"] = *minSize;
    if({0})
      query["maxSize"] = *maxSize;
    if({0})
      query["minAddress"] = *minAddress;
    if({0})
      query["maxAddress"] = *maxAddress;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
