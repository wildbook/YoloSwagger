#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace leagueapi {
  struct EndOfGameLcdsPlayerParticipantStatsSummary_t {
    std::vector<EndOfGameLcdsRawStatDTO_t> statistics;
    int32_t profileIconId;
    uint64_t gameId;
    int32_t spell1Id;
    std::string skinName;
    int32_t elo;
    uint64_t userId;
    int32_t spell2Id;
    int32_t leaves;
    int32_t eloChange;
    bool botPlayer;
    int32_t losses;
    std::string summonerName;
    int32_t skinIndex;
    int32_t wins;
    bool leaver;
    int32_t level;
    int32_t teamId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    j["statistics"] = v.statistics;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["spell1Id"] = v.spell1Id;
    j["skinName"] = v.skinName;
    j["elo"] = v.elo;
    j["userId"] = v.userId;
    j["spell2Id"] = v.spell2Id;
    j["leaves"] = v.leaves;
    j["eloChange"] = v.eloChange;
    j["botPlayer"] = v.botPlayer;
    j["losses"] = v.losses;
    j["summonerName"] = v.summonerName;
    j["skinIndex"] = v.skinIndex;
    j["wins"] = v.wins;
    j["leaver"] = v.leaver;
    j["level"] = v.level;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO_t>>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.elo = j.at("elo").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.losses = j.at("losses").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
    v.level = j.at("level").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
