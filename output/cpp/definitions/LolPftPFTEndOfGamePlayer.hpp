#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEndOfGamePlayer_t {
    int32_t wins;
    int32_t profileIconId;
    int32_t spell1Id;
    std::string skinName;
    int32_t losses;
    int32_t spell2Id;
    bool isReportingDisabled;
    int32_t leaves;
    nlohmann::json stats;
    uint64_t userId;
    bool botPlayer;
    int32_t level;
    uint64_t summonerId;
    std::vector<int32_t> items;
    uint64_t gameId;
    int32_t elo;
    int32_t championId;
    std::string summonerName;
    int32_t teamId;
    int32_t eloChange;
    bool leaver;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGamePlayer_t& v) {
    j["wins"] = v.wins;
    j["profileIconId"] = v.profileIconId;
    j["spell1Id"] = v.spell1Id;
    j["skinName"] = v.skinName;
    j["losses"] = v.losses;
    j["spell2Id"] = v.spell2Id;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["leaves"] = v.leaves;
    j["stats"] = v.stats;
    j["userId"] = v.userId;
    j["botPlayer"] = v.botPlayer;
    j["level"] = v.level;
    j["summonerId"] = v.summonerId;
    j["items"] = v.items;
    j["gameId"] = v.gameId;
    j["elo"] = v.elo;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
    j["eloChange"] = v.eloChange;
    j["leaver"] = v.leaver;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGamePlayer_t& v) {
    v.wins = j.at("wins").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.losses = j.at("losses").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.userId = j.at("userId").get<uint64_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.level = j.at("level").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
  }
  inline std::string to_string(const LolPftPFTEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
