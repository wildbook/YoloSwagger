#ifndef SWAGGER_TYPES_PlayerMissionDTO_HPP
#define SWAGGER_TYPES_PlayerMissionDTO_HPP
#include <json.hpp>
#include "PlayerMissionObjectiveDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
#include "MissionAlertDTO.hpp"
#include "MissionRequirementDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerMissionDTO {
    // 
    std::string backgroundImageUrl;
    // 
    std::string celebrationType;
    // 
    int64_t completedDate;
    // 
    int64_t cooldownTimeMillis;
    // 
    std::string description;
    // 
    std::string displayType;
    // 
    int64_t endTime;
    // 
    std::vector<MissionAlertDTO> expiringWarnings;
    // 
    std::string helperText;
    // 
    std::string iconImageUrl;
    // 
    std::string id;
    // 
    std::string internalName;
    // 
    bool isNew;
    // 
    int64_t lastUpdatedTimestamp;
    // 
    std::string locale;
    // 
    std::string missionType;
    // 
    std::vector<PlayerMissionObjectiveDTO> objectives;
    // 
    std::vector<MissionRequirementDTO> requirements;
    // 
    std::vector<PlayerMissionRewardDTO> rewards;
    // 
    std::string seriesName;
    // 
    int64_t startTime;
    // 
    std::string status;
    // 
    std::string title;
    // 
    bool viewed;
  };

  void to_json(nlohmann::json& j, const PlayerMissionDTO& v) {
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["celebrationType"] = v.celebrationType;
    j["completedDate"] = v.completedDate;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["description"] = v.description;
    j["displayType"] = v.displayType;
    j["endTime"] = v.endTime;
    j["expiringWarnings"] = v.expiringWarnings;
    j["helperText"] = v.helperText;
    j["iconImageUrl"] = v.iconImageUrl;
    j["id"] = v.id;
    j["internalName"] = v.internalName;
    j["isNew"] = v.isNew;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["locale"] = v.locale;
    j["missionType"] = v.missionType;
    j["objectives"] = v.objectives;
    j["requirements"] = v.requirements;
    j["rewards"] = v.rewards;
    j["seriesName"] = v.seriesName;
    j["startTime"] = v.startTime;
    j["status"] = v.status;
    j["title"] = v.title;
    j["viewed"] = v.viewed;
  }

  void from_json(const nlohmann::json& j, PlayerMissionDTO& v) {
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>;
    v.celebrationType = j.at("celebrationType").get<std::string>;
    v.completedDate = j.at("completedDate").get<int64_t>;
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>;
    v.description = j.at("description").get<std::string>;
    v.displayType = j.at("displayType").get<std::string>;
    v.endTime = j.at("endTime").get<int64_t>;
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO>>;
    v.helperText = j.at("helperText").get<std::string>;
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.internalName = j.at("internalName").get<std::string>;
    v.isNew = j.at("isNew").get<bool>;
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>;
    v.locale = j.at("locale").get<std::string>;
    v.missionType = j.at("missionType").get<std::string>;
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO>>;
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO>>;
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO>>;
    v.seriesName = j.at("seriesName").get<std::string>;
    v.startTime = j.at("startTime").get<int64_t>;
    v.status = j.at("status").get<std::string>;
    v.title = j.at("title").get<std::string>;
    v.viewed = j.at("viewed").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PlayerMissionDTO_HPP
