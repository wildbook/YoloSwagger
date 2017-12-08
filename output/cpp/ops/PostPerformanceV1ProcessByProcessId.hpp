#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Registers the process and includes it with the performance information.
  void PostPerformanceV1ProcessByProcessId (const ClientInfo& info,
    //Id of the process to track performance information.
    const uint32_t& processId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/performance/v1/process/"+UrlCode::encode(to_string(processId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
