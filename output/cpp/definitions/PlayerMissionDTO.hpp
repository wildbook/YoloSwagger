#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerMissionObjectiveDTO.hpp"
#include "MissionRequirementDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
#include "MissionAlertDTO.hpp"
namespace leagueapi {
  struct PlayerMissionDTO_t {
    std::string description;
    int64_t completedDate;
    bool viewed;
    std::string missionType;
    std::string iconImageUrl;
    std::string celebrationType;
    std::string locale;
    std::string seriesName;
    std::vector<MissionAlertDTO_t> expiringWarnings;
    std::string helperText;
    std::string internalName;
    int64_t lastUpdatedTimestamp;
    std::string status;
    std::string id;
    std::vector<PlayerMissionObjectiveDTO_t> objectives;
    int64_t endTime;
    std::string title;
    std::vector<MissionRequirementDTO_t> requirements;
    int64_t startTime;
    int64_t cooldownTimeMillis;
    std::string displayType;
    std::vector<PlayerMissionRewardDTO_t> rewards;
    std::string backgroundImageUrl;
    bool isNew;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionDTO_t& v) {
    j["description"] = v.description;
    j["completedDate"] = v.completedDate;
    j["viewed"] = v.viewed;
    j["missionType"] = v.missionType;
    j["iconImageUrl"] = v.iconImageUrl;
    j["celebrationType"] = v.celebrationType;
    j["locale"] = v.locale;
    j["seriesName"] = v.seriesName;
    j["expiringWarnings"] = v.expiringWarnings;
    j["helperText"] = v.helperText;
    j["internalName"] = v.internalName;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["status"] = v.status;
    j["id"] = v.id;
    j["objectives"] = v.objectives;
    j["endTime"] = v.endTime;
    j["title"] = v.title;
    j["requirements"] = v.requirements;
    j["startTime"] = v.startTime;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["displayType"] = v.displayType;
    j["rewards"] = v.rewards;
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["isNew"] = v.isNew;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.completedDate = j.at("completedDate").get<int64_t>();
    v.viewed = j.at("viewed").get<bool>();
    v.missionType = j.at("missionType").get<std::string>();
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.seriesName = j.at("seriesName").get<std::string>();
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO_t>>();
    v.helperText = j.at("helperText").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>();
    v.status = j.at("status").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO_t>>();
    v.endTime = j.at("endTime").get<int64_t>();
    v.title = j.at("title").get<std::string>();
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO_t>>();
    v.startTime = j.at("startTime").get<int64_t>();
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>();
    v.displayType = j.at("displayType").get<std::string>();
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO_t>>();
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>();
    v.isNew = j.at("isNew").get<bool>();
  }
  inline std::string to_string(const PlayerMissionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
