#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
#include "LolMatchHistoryMatchHistoryTeam.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame_t {
    std::string gameCreationDate;
    std::string gameMode;
    std::string platformId;
    std::string gameType;
    uint16_t seasonId;
    uint16_t mapId;
    int32_t queueId;
    uint64_t gameId;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t> participantIdentities;
    std::vector<LolMatchHistoryMatchHistoryParticipant_t> participants;
    std::string gameVersion;
    uint64_t gameCreation;
    std::vector<LolMatchHistoryMatchHistoryTeam_t> teams;
    uint32_t gameDuration;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGame_t& v) {
    j["gameCreationDate"] = v.gameCreationDate;
    j["gameMode"] = v.gameMode;
    j["platformId"] = v.platformId;
    j["gameType"] = v.gameType;
    j["seasonId"] = v.seasonId;
    j["mapId"] = v.mapId;
    j["queueId"] = v.queueId;
    j["gameId"] = v.gameId;
    j["participantIdentities"] = v.participantIdentities;
    j["participants"] = v.participants;
    j["gameVersion"] = v.gameVersion;
    j["gameCreation"] = v.gameCreation;
    j["teams"] = v.teams;
    j["gameDuration"] = v.gameDuration;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGame_t& v) {
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.seasonId = j.at("seasonId").get<uint16_t>();
    v.mapId = j.at("mapId").get<uint16_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t>>();
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant_t>>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.gameCreation = j.at("gameCreation").get<uint64_t>();
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam_t>>();
    v.gameDuration = j.at("gameDuration").get<uint32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
