#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigClient.hpp"
#include "TournamentPhaseDTO.hpp"
namespace leagueapi {
  struct TournamentDTO_t {
    std::vector<TournamentPhaseDTO_t> phases;
    int64_t rosterDisbandDeadline;
    int32_t rosterSize;
    int64_t scheduleEndTime;
    int64_t rosterCreateDeadline;
    int32_t queueId;
    int64_t id;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    int32_t maxSub;
    int64_t scoutingTimeMs;
    int32_t entryFee;
    std::string nameLocKey;
    int32_t themeId;
    std::vector<int32_t> buyInOptions;
    int64_t scheduleTime;
  };

  inline void to_json(nlohmann::json& j, const TournamentDTO_t& v) {
    j["phases"] = v.phases;
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline;
    j["rosterSize"] = v.rosterSize;
    j["scheduleEndTime"] = v.scheduleEndTime;
    j["rosterCreateDeadline"] = v.rosterCreateDeadline;
    j["queueId"] = v.queueId;
    j["id"] = v.id;
    j["rewardConfig"] = v.rewardConfig;
    j["maxSub"] = v.maxSub;
    j["scoutingTimeMs"] = v.scoutingTimeMs;
    j["entryFee"] = v.entryFee;
    j["nameLocKey"] = v.nameLocKey;
    j["themeId"] = v.themeId;
    j["buyInOptions"] = v.buyInOptions;
    j["scheduleTime"] = v.scheduleTime;
  }

  inline void from_json(const nlohmann::json& j, TournamentDTO_t& v) {
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO_t>>();
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>();
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.maxSub = j.at("maxSub").get<int32_t>();
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.scheduleTime = j.at("scheduleTime").get<int64_t>();
  }
  inline std::string to_string(const TournamentDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
