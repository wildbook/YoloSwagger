#pragma once
#incldue "../client.hpp"
#include "LolClashSetTicketRequest.hpp"
namespace leagueapi {
  nlohmann::json_t PostLolClashV1TournamentByTournamentIdRosterSetBid (const ClientInfo& info,
    const int64_t_t& tournamentId,
    const LolClashSetTicketRequest_t& setTicketRequest)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(setTicketRequest).dump();
    const std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/roster/set-bid";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}