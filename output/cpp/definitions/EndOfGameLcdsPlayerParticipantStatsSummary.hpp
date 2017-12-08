#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace leagueapi {
  struct EndOfGameLcdsPlayerParticipantStatsSummary_t {
    int32_t skinIndex;
    int32_t spell1Id;
    std::string skinName;
    int32_t losses;
    int32_t spell2Id;
    int32_t profileIconId;
    int32_t championId;
    bool botPlayer;
    int32_t level;
    uint64_t userId;
    int32_t teamId;
    int32_t wins;
    uint64_t gameId;
    int32_t elo;
    int32_t leaves;
    std::string summonerName;
    std::vector<EndOfGameLcdsRawStatDTO_t> statistics;
    int32_t eloChange;
    bool leaver;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    j["skinIndex"] = v.skinIndex;
    j["spell1Id"] = v.spell1Id;
    j["skinName"] = v.skinName;
    j["losses"] = v.losses;
    j["spell2Id"] = v.spell2Id;
    j["profileIconId"] = v.profileIconId;
    j["championId"] = v.championId;
    j["botPlayer"] = v.botPlayer;
    j["level"] = v.level;
    j["userId"] = v.userId;
    j["teamId"] = v.teamId;
    j["wins"] = v.wins;
    j["gameId"] = v.gameId;
    j["elo"] = v.elo;
    j["leaves"] = v.leaves;
    j["summonerName"] = v.summonerName;
    j["statistics"] = v.statistics;
    j["eloChange"] = v.eloChange;
    j["leaver"] = v.leaver;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.losses = j.at("losses").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.level = j.at("level").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO_t>>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
  }
  inline std::string to_string(const EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
