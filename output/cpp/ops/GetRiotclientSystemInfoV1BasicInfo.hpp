#pragma once
#incldue "../client.hpp"
#include "basicSystemInfo.hpp"
namespace leagueapi {
  //Get basic system information: OS, memory, processor speed, and number of physical cores
  basicSystemInfo_t GetRiotclientSystemInfoV1BasicInfo (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/riotclient/system-info/v1/basic-info";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
