#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEndOfGamePlayer_t {
    int32_t profileIconId;
    bool botPlayer;
    int32_t championId;
    int32_t level;
    uint64_t gameId;
    uint64_t summonerId;
    int32_t teamId;
    std::string summonerName;
    int32_t wins;
    std::string skinName;
    int32_t spell1Id;
    int32_t spell2Id;
    uint64_t userId;
    int32_t elo;
    int32_t leaves;
    int32_t eloChange;
    std::vector<int32_t> items;
    bool leaver;
    int32_t losses;
    bool isReportingDisabled;
    nlohmann::json stats;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGamePlayer_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["botPlayer"] = v.botPlayer;
    j["championId"] = v.championId;
    j["level"] = v.level;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
    j["summonerName"] = v.summonerName;
    j["wins"] = v.wins;
    j["skinName"] = v.skinName;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["userId"] = v.userId;
    j["elo"] = v.elo;
    j["leaves"] = v.leaves;
    j["eloChange"] = v.eloChange;
    j["items"] = v.items;
    j["leaver"] = v.leaver;
    j["losses"] = v.losses;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["stats"] = v.stats;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGamePlayer_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.wins = j.at("wins").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.leaver = j.at("leaver").get<bool>();
    v.losses = j.at("losses").get<int32_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.stats = j.at("stats").get<nlohmann::json>();
  }
  inline std::string to_string(const LolPftPFTEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
