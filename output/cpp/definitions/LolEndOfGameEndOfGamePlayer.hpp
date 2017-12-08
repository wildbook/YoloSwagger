#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer_t {
    bool_t botPlayer;
    int32_t_t losses;
    int32_t_t skinIndex;
    std::string_t skinName;
    int32_t_t teamId;
    int32_t_t profileIconId;
    nlohmann::json_t stats;
    int32_t_t championId;
    int32_t_t elo;
    uint64_t_t summonerId;
    bool_t isReportingDisabled;
    uint64_t_t gameId;
    std::string_t summonerName;
    uint64_t_t userId;
    int32_t_t spell1Id;
    int32_t_t eloChange;
    int32_t_t level;
    std::vector<int32_t> items;
    int32_t_t leaves;
    bool_t leaver;
    int32_t_t spell2Id;
    int32_t_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayer_t& v) {
    j["botPlayer"] = v.botPlayer;
    j["losses"] = v.losses;
    j["skinIndex"] = v.skinIndex;
    j["skinName"] = v.skinName;
    j["teamId"] = v.teamId;
    j["profileIconId"] = v.profileIconId;
    j["stats"] = v.stats;
    j["championId"] = v.championId;
    j["elo"] = v.elo;
    j["summonerId"] = v.summonerId;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["gameId"] = v.gameId;
    j["summonerName"] = v.summonerName;
    j["userId"] = v.userId;
    j["spell1Id"] = v.spell1Id;
    j["eloChange"] = v.eloChange;
    j["level"] = v.level;
    j["items"] = v.items;
    j["leaves"] = v.leaves;
    j["leaver"] = v.leaver;
    j["spell2Id"] = v.spell2Id;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayer_t& v) {
    v.botPlayer = j.at("botPlayer").get<bool_t>();
    v.losses = j.at("losses").get<int32_t_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t_t>();
    v.skinName = j.at("skinName").get<std::string_t>();
    v.teamId = j.at("teamId").get<int32_t_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.stats = j.at("stats").get<nlohmann::json_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.elo = j.at("elo").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.userId = j.at("userId").get<uint64_t_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t_t>();
    v.eloChange = j.at("eloChange").get<int32_t_t>();
    v.level = j.at("level").get<int32_t_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.leaves = j.at("leaves").get<int32_t_t>();
    v.leaver = j.at("leaver").get<bool_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t_t>();
    v.wins = j.at("wins").get<int32_t_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
