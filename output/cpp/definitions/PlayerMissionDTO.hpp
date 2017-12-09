#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerMissionRewardDTO.hpp"
#include "MissionRequirementDTO.hpp"
#include "MissionAlertDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
namespace leagueapi {
  struct PlayerMissionDTO_t {
    std::string helperText;
    std::vector<MissionRequirementDTO_t> requirements;
    bool viewed;
    std::string title;
    std::string id;
    std::string internalName;
    std::vector<MissionAlertDTO_t> expiringWarnings;
    std::vector<PlayerMissionRewardDTO_t> rewards;
    std::vector<PlayerMissionObjectiveDTO_t> objectives;
    std::string seriesName;
    std::string backgroundImageUrl;
    std::string locale;
    std::string celebrationType;
    std::string description;
    int64_t endTime;
    int64_t startTime;
    int64_t lastUpdatedTimestamp;
    std::string displayType;
    int64_t cooldownTimeMillis;
    std::string status;
    int64_t completedDate;
    std::string iconImageUrl;
    std::string missionType;
    bool isNew;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionDTO_t& v) {
    j["helperText"] = v.helperText;
    j["requirements"] = v.requirements;
    j["viewed"] = v.viewed;
    j["title"] = v.title;
    j["id"] = v.id;
    j["internalName"] = v.internalName;
    j["expiringWarnings"] = v.expiringWarnings;
    j["rewards"] = v.rewards;
    j["objectives"] = v.objectives;
    j["seriesName"] = v.seriesName;
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["locale"] = v.locale;
    j["celebrationType"] = v.celebrationType;
    j["description"] = v.description;
    j["endTime"] = v.endTime;
    j["startTime"] = v.startTime;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["displayType"] = v.displayType;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["status"] = v.status;
    j["completedDate"] = v.completedDate;
    j["iconImageUrl"] = v.iconImageUrl;
    j["missionType"] = v.missionType;
    j["isNew"] = v.isNew;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionDTO_t& v) {
    v.helperText = j.at("helperText").get<std::string>();
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO_t>>();
    v.viewed = j.at("viewed").get<bool>();
    v.title = j.at("title").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO_t>>();
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO_t>>();
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO_t>>();
    v.seriesName = j.at("seriesName").get<std::string>();
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.endTime = j.at("endTime").get<int64_t>();
    v.startTime = j.at("startTime").get<int64_t>();
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>();
    v.displayType = j.at("displayType").get<std::string>();
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>();
    v.status = j.at("status").get<std::string>();
    v.completedDate = j.at("completedDate").get<int64_t>();
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>();
    v.missionType = j.at("missionType").get<std::string>();
    v.isNew = j.at("isNew").get<bool>();
  }
  inline std::string to_string(const PlayerMissionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
