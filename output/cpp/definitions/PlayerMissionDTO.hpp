#pragma once
#include <json.hpp>
#include <optional>
#include "MissionAlertDTO.hpp"
#include "MissionRequirementDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
namespace leagueapi {
  struct PlayerMissionDTO_t {
    std::string status;
    std::string displayType;
    int64_t endTime;
    std::string iconImageUrl;
    std::vector<PlayerMissionObjectiveDTO_t> objectives;
    std::string id;
    std::string missionType;
    int64_t completedDate;
    std::string seriesName;
    std::string description;
    std::string internalName;
    int64_t lastUpdatedTimestamp;
    std::string celebrationType;
    std::vector<PlayerMissionRewardDTO_t> rewards;
    std::string helperText;
    bool isNew;
    std::vector<MissionRequirementDTO_t> requirements;
    std::string backgroundImageUrl;
    int64_t startTime;
    std::vector<MissionAlertDTO_t> expiringWarnings;
    int64_t cooldownTimeMillis;
    std::string locale;
    bool viewed;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionDTO_t& v) {
    j["status"] = v.status;
    j["displayType"] = v.displayType;
    j["endTime"] = v.endTime;
    j["iconImageUrl"] = v.iconImageUrl;
    j["objectives"] = v.objectives;
    j["id"] = v.id;
    j["missionType"] = v.missionType;
    j["completedDate"] = v.completedDate;
    j["seriesName"] = v.seriesName;
    j["description"] = v.description;
    j["internalName"] = v.internalName;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["celebrationType"] = v.celebrationType;
    j["rewards"] = v.rewards;
    j["helperText"] = v.helperText;
    j["isNew"] = v.isNew;
    j["requirements"] = v.requirements;
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["startTime"] = v.startTime;
    j["expiringWarnings"] = v.expiringWarnings;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["locale"] = v.locale;
    j["viewed"] = v.viewed;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionDTO_t& v) {
    v.status = j.at("status").get<std::string>();
    v.displayType = j.at("displayType").get<std::string>();
    v.endTime = j.at("endTime").get<int64_t>();
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>();
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO_t>>();
    v.id = j.at("id").get<std::string>();
    v.missionType = j.at("missionType").get<std::string>();
    v.completedDate = j.at("completedDate").get<int64_t>();
    v.seriesName = j.at("seriesName").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO_t>>();
    v.helperText = j.at("helperText").get<std::string>();
    v.isNew = j.at("isNew").get<bool>();
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO_t>>();
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>();
    v.startTime = j.at("startTime").get<int64_t>();
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO_t>>();
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>();
    v.locale = j.at("locale").get<std::string>();
    v.viewed = j.at("viewed").get<bool>();
    v.title = j.at("title").get<std::string>();
  }
  inline std::string to_string(const PlayerMissionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
