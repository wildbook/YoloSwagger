#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEndOfGamePlayer_t {
    int32_t teamId;
    uint64_t summonerId;
    int32_t eloChange;
    uint64_t userId;
    std::vector<int32_t> items;
    std::string skinName;
    std::string summonerName;
    int32_t spell2Id;
    int32_t profileIconId;
    uint64_t gameId;
    int32_t elo;
    int32_t losses;
    int32_t leaves;
    bool botPlayer;
    int32_t championId;
    int32_t level;
    int32_t wins;
    bool isReportingDisabled;
    nlohmann::json stats;
    int32_t spell1Id;
    bool leaver;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGamePlayer_t& v) {
    j["teamId"] = v.teamId;
    j["summonerId"] = v.summonerId;
    j["eloChange"] = v.eloChange;
    j["userId"] = v.userId;
    j["items"] = v.items;
    j["skinName"] = v.skinName;
    j["summonerName"] = v.summonerName;
    j["spell2Id"] = v.spell2Id;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["elo"] = v.elo;
    j["losses"] = v.losses;
    j["leaves"] = v.leaves;
    j["botPlayer"] = v.botPlayer;
    j["championId"] = v.championId;
    j["level"] = v.level;
    j["wins"] = v.wins;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["stats"] = v.stats;
    j["spell1Id"] = v.spell1Id;
    j["leaver"] = v.leaver;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGamePlayer_t& v) {
    v.teamId = j.at("teamId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.skinName = j.at("skinName").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
  }
  inline std::string to_string(const LolPftPFTEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
