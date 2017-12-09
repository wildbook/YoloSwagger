#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryTeam.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame_t {
    std::string gameMode;
    std::vector<LolMatchHistoryMatchHistoryTeam_t> teams;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t> participantIdentities;
    std::string gameCreationDate;
    std::string gameType;
    uint16_t mapId;
    std::vector<LolMatchHistoryMatchHistoryParticipant_t> participants;
    uint64_t gameId;
    std::string gameVersion;
    std::string platformId;
    int32_t queueId;
    uint32_t gameDuration;
    uint16_t seasonId;
    uint64_t gameCreation;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGame_t& v) {
    j["gameMode"] = v.gameMode;
    j["teams"] = v.teams;
    j["participantIdentities"] = v.participantIdentities;
    j["gameCreationDate"] = v.gameCreationDate;
    j["gameType"] = v.gameType;
    j["mapId"] = v.mapId;
    j["participants"] = v.participants;
    j["gameId"] = v.gameId;
    j["gameVersion"] = v.gameVersion;
    j["platformId"] = v.platformId;
    j["queueId"] = v.queueId;
    j["gameDuration"] = v.gameDuration;
    j["seasonId"] = v.seasonId;
    j["gameCreation"] = v.gameCreation;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGame_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam_t>>();
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t>>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.mapId = j.at("mapId").get<uint16_t>();
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameDuration = j.at("gameDuration").get<uint32_t>();
    v.seasonId = j.at("seasonId").get<uint16_t>();
    v.gameCreation = j.at("gameCreation").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
