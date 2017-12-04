#ifndef SWAGGER_TYPES_LolPftPFTEndOfGamePlayer_HPP
#define SWAGGER_TYPES_LolPftPFTEndOfGamePlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPftPFTEndOfGamePlayer {
    // 
    bool botPlayer;
    // 
    int32_t level;
    // 
    uint64_t gameId;
    // 
    int32_t championId;
    // 
    int32_t elo;
    // 
    bool isReportingDisabled;
    // 
    std::vector<int32_t> items;
    // 
    int32_t leaves;
    // 
    bool leaver;
    // 
    uint64_t userId;
    // 
    int32_t profileIconId;
    // 
    std::string skinName;
    // 
    int32_t spell2Id;
    // 
    int32_t wins;
    // 
    int32_t teamId;
    // 
    std::string summonerName;
    // 
    int32_t losses;
    // 
    int32_t spell1Id;
    // 
    int32_t eloChange;
    // 
    uint64_t summonerId;
    // 
    nlohmann::json stats;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGamePlayer& v) {
    j["botPlayer"] = v.botPlayer;
    j["level"] = v.level;
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["elo"] = v.elo;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["items"] = v.items;
    j["leaves"] = v.leaves;
    j["leaver"] = v.leaver;
    j["userId"] = v.userId;
    j["profileIconId"] = v.profileIconId;
    j["skinName"] = v.skinName;
    j["spell2Id"] = v.spell2Id;
    j["wins"] = v.wins;
    j["teamId"] = v.teamId;
    j["summonerName"] = v.summonerName;
    j["losses"] = v.losses;
    j["spell1Id"] = v.spell1Id;
    j["eloChange"] = v.eloChange;
    j["summonerId"] = v.summonerId;
    j["stats"] = v.stats;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGamePlayer& v) {
    v.botPlayer = j.at("botPlayer").get<bool>;
    v.level = j.at("level").get<int32_t>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.elo = j.at("elo").get<int32_t>;
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>;
    v.items = j.at("items").get<std::vector<int32_t>>;
    v.leaves = j.at("leaves").get<int32_t>;
    v.leaver = j.at("leaver").get<bool>;
    v.userId = j.at("userId").get<uint64_t>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.skinName = j.at("skinName").get<std::string>;
    v.spell2Id = j.at("spell2Id").get<int32_t>;
    v.wins = j.at("wins").get<int32_t>;
    v.teamId = j.at("teamId").get<int32_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.losses = j.at("losses").get<int32_t>;
    v.spell1Id = j.at("spell1Id").get<int32_t>;
    v.eloChange = j.at("eloChange").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.stats = j.at("stats").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTEndOfGamePlayer_HPP
