#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsInvitePrivileges_t {
    bool_t canInvite;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitePrivileges_t& v) {
    j["canInvite"] = v.canInvite;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitePrivileges_t& v) {
    v.canInvite = j.at("canInvite").get<bool_t>();
  }
  inline std::string to_string(const LcdsInvitePrivileges_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
