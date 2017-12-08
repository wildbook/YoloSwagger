#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyMember_t {
    LolLobbyTeamBuilderLobbyPositionPreferences_t positionPreferences;
    bool_t autoFillProtectedForPromos;
    bool_t autoFillEligible;
    bool_t autoFillProtectedForStreaking;
    std::optional<std::string_t> excludedPositionPreference;
    bool_t isOwner;
    bool_t canInviteOthers;
    bool_t showPositionExcluder;
    bool_t autoFillProtectedForSoloing;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember_t& v) {
    j["positionPreferences"] = v.positionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["isOwner"] = v.isOwner;
    j["canInviteOthers"] = v.canInviteOthers;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember_t& v) {
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool_t>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string_t>();
    v.isOwner = j.at("isOwner").get<bool_t>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool_t>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool_t>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
