#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeam.hpp"
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame_t {
    std::string platformId;
    uint32_t gameDuration;
    uint64_t gameId;
    int32_t queueId;
    uint16_t mapId;
    std::vector<LolMatchHistoryMatchHistoryParticipant_t> participants;
    std::string gameType;
    uint16_t seasonId;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t> participantIdentities;
    std::string gameMode;
    std::string gameVersion;
    std::string gameCreationDate;
    std::vector<LolMatchHistoryMatchHistoryTeam_t> teams;
    uint64_t gameCreation;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGame_t& v) {
    j["platformId"] = v.platformId;
    j["gameDuration"] = v.gameDuration;
    j["gameId"] = v.gameId;
    j["queueId"] = v.queueId;
    j["mapId"] = v.mapId;
    j["participants"] = v.participants;
    j["gameType"] = v.gameType;
    j["seasonId"] = v.seasonId;
    j["participantIdentities"] = v.participantIdentities;
    j["gameMode"] = v.gameMode;
    j["gameVersion"] = v.gameVersion;
    j["gameCreationDate"] = v.gameCreationDate;
    j["teams"] = v.teams;
    j["gameCreation"] = v.gameCreation;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGame_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.gameDuration = j.at("gameDuration").get<uint32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.mapId = j.at("mapId").get<uint16_t>();
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant_t>>();
    v.gameType = j.at("gameType").get<std::string>();
    v.seasonId = j.at("seasonId").get<uint16_t>();
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam_t>>();
    v.gameCreation = j.at("gameCreation").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
