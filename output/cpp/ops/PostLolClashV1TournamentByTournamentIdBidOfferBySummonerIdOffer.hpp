#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json PostLolClashV1TournamentByTournamentIdBidOfferBySummonerIdOffer (const ClientInfo& info,
    const int64_t& tournamentId,
    const uint64_t& summonerId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-clash/v1/tournament/"+UrlCode::encode(to_string(tournamentId))+"/bid-offer/"+UrlCode::encode(to_string(summonerId))+"/offer";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
