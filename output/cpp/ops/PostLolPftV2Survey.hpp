#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolPftPFTSurvey.hpp"
namespace leagueapi {
  void PostLolPftV2Survey (const ClientInfo& info,
    const LolPftPFTSurvey_t& survey)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(survey).dump();
    const std::string path = "/lol-pft/v2/survey";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
