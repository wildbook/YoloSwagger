#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentPhaseDTO.hpp"
#include "ClashRewardConfigClient.hpp"
namespace leagueapi {
  struct TournamentDTO_t {
    int64_t scheduleEndTime;
    std::string nameLocKey;
    int32_t themeId;
    int64_t rosterDisbandDeadline;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    std::vector<int32_t> buyInOptions;
    int32_t queueId;
    int32_t rosterSize;
    std::vector<TournamentPhaseDTO_t> phases;
    int64_t scheduleTime;
    int64_t rosterCreateDeadline;
    int32_t maxSub;
    int64_t id;
    int64_t scoutingTimeMs;
    int32_t entryFee;
  };

  inline void to_json(nlohmann::json& j, const TournamentDTO_t& v) {
    j["scheduleEndTime"] = v.scheduleEndTime;
    j["nameLocKey"] = v.nameLocKey;
    j["themeId"] = v.themeId;
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline;
    j["rewardConfig"] = v.rewardConfig;
    j["buyInOptions"] = v.buyInOptions;
    j["queueId"] = v.queueId;
    j["rosterSize"] = v.rosterSize;
    j["phases"] = v.phases;
    j["scheduleTime"] = v.scheduleTime;
    j["rosterCreateDeadline"] = v.rosterCreateDeadline;
    j["maxSub"] = v.maxSub;
    j["id"] = v.id;
    j["scoutingTimeMs"] = v.scoutingTimeMs;
    j["entryFee"] = v.entryFee;
  }

  inline void from_json(const nlohmann::json& j, TournamentDTO_t& v) {
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO_t>>();
    v.scheduleTime = j.at("scheduleTime").get<int64_t>();
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>();
    v.maxSub = j.at("maxSub").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>();
    v.entryFee = j.at("entryFee").get<int32_t>();
  }
  inline std::string to_string(const TournamentDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
