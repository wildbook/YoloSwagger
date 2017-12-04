#ifndef SWAGGER_TYPES_LcdsInvitePrivileges_HPP
#define SWAGGER_TYPES_LcdsInvitePrivileges_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsInvitePrivileges {
    // 
    bool canInvite;
  };

  void to_json(nlohmann::json& j, const LcdsInvitePrivileges& v) {
    j["canInvite"] = v.canInvite;
  }

  void from_json(const nlohmann::json& j, LcdsInvitePrivileges& v) {
    v.canInvite = j.at("canInvite").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LcdsInvitePrivileges_HPP
