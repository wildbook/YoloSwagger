#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Restarts the CPU timing information and returns the results from PerfReportProcesses
  nlohmann::json PostPerformanceV1ReportRestart (const ClientInfo& info,
    //Time in seconds for each CPU timing sample.
    const std::optional<int32_t>& sampleLength = std::nullopt,
    //Number of samples to record.
    const std::optional<int32_t>& sampleCount = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/performance/v1/report/restart";
    Headers query;
    if({0})
      query["sampleLength"] = *sampleLength;
    if({0})
      query["sampleCount"] = *sampleCount;
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
