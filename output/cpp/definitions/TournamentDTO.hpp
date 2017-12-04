#ifndef SWAGGER_TYPES_TournamentDTO_HPP
#define SWAGGER_TYPES_TournamentDTO_HPP
#include <json.hpp>
#include "ClashRewardConfigClient.hpp"
#include "TournamentPhaseDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentDTO {
    // 
    int32_t queueId;
    // 
    std::vector<TournamentPhaseDTO> phases;
    // 
    std::vector<int32_t> buyInOptions;
    // 
    int32_t themeId;
    // 
    std::string nameLocKey;
    // 
    int64_t rosterCreateDeadline;
    // 
    std::vector<ClashRewardConfigClient> rewardConfig;
    // 
    int64_t scheduleTime;
    // 
    int32_t maxSub;
    // 
    int64_t scoutingTimeMs;
    // 
    int32_t entryFee;
    // 
    int64_t rosterDisbandDeadline;
    // 
    int32_t rosterSize;
    // 
    int64_t id;
    // 
    int64_t scheduleEndTime;
  };

  inline void to_json(nlohmann::json& j, const TournamentDTO& v) {
    j["queueId"] = v.queueId;
    j["phases"] = v.phases;
    j["buyInOptions"] = v.buyInOptions;
    j["themeId"] = v.themeId;
    j["nameLocKey"] = v.nameLocKey;
    j["rosterCreateDeadline"] = v.rosterCreateDeadline;
    j["rewardConfig"] = v.rewardConfig;
    j["scheduleTime"] = v.scheduleTime;
    j["maxSub"] = v.maxSub;
    j["scoutingTimeMs"] = v.scoutingTimeMs;
    j["entryFee"] = v.entryFee;
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline;
    j["rosterSize"] = v.rosterSize;
    j["id"] = v.id;
    j["scheduleEndTime"] = v.scheduleEndTime;
  }

  inline void from_json(const nlohmann::json& j, TournamentDTO& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO>>;
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>;
    v.themeId = j.at("themeId").get<int32_t>;
    v.nameLocKey = j.at("nameLocKey").get<std::string>;
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>;
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient>>;
    v.scheduleTime = j.at("scheduleTime").get<int64_t>;
    v.maxSub = j.at("maxSub").get<int32_t>;
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>;
    v.entryFee = j.at("entryFee").get<int32_t>;
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>;
    v.rosterSize = j.at("rosterSize").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_TournamentDTO_HPP