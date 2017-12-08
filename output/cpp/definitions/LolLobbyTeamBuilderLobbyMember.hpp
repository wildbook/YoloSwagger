#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyMember_t {
    LolLobbyTeamBuilderLobbyPositionPreferences_t positionPreferences;
    uint64_t id;
    bool autoFillProtectedForStreaking;
    bool isOwner;
    bool canInviteOthers;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForPromos;
    bool autoFillEligible;
    bool showPositionExcluder;
    std::optional<std::string> excludedPositionPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember_t& v) {
    j["positionPreferences"] = v.positionPreferences;
    j["id"] = v.id;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["isOwner"] = v.isOwner;
    j["canInviteOthers"] = v.canInviteOthers;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["showPositionExcluder"] = v.showPositionExcluder;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember_t& v) {
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences_t>();
    v.id = j.at("id").get<uint64_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
