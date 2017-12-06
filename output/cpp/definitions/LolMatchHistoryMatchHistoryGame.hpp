#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeam.hpp"
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame_t {
    uint64_t gameCreation;
    std::string gameCreationDate;
    uint32_t gameDuration;
    uint64_t gameId;
    std::string gameMode;
    std::string gameType;
    std::string gameVersion;
    uint16_t mapId;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t> participantIdentities;
    std::vector<LolMatchHistoryMatchHistoryParticipant_t> participants;
    std::string platformId;
    int32_t queueId;
    uint16_t seasonId;
    std::vector<LolMatchHistoryMatchHistoryTeam_t> teams;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGame_t& v) {
    j["gameCreation"] = v.gameCreation;
    j["gameCreationDate"] = v.gameCreationDate;
    j["gameDuration"] = v.gameDuration;
    j["gameId"] = v.gameId;
    j["gameMode"] = v.gameMode;
    j["gameType"] = v.gameType;
    j["gameVersion"] = v.gameVersion;
    j["mapId"] = v.mapId;
    j["participantIdentities"] = v.participantIdentities;
    j["participants"] = v.participants;
    j["platformId"] = v.platformId;
    j["queueId"] = v.queueId;
    j["seasonId"] = v.seasonId;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGame_t& v) {
    v.gameCreation = j.at("gameCreation").get<uint64_t>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.gameDuration = j.at("gameDuration").get<uint32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.mapId = j.at("mapId").get<uint16_t>();
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t>>();
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant_t>>();
    v.platformId = j.at("platformId").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.seasonId = j.at("seasonId").get<uint16_t>();
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam_t>>();
  }
}
