#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    std::string clubKey;
    int64_t lastModifiedTs;
    int64_t createdTs;
    std::string description;
    std::string role;
    ClubPermissions_t permissionMap;
    std::string name;
    std::string tag;
    std::string motd;
    std::string jid;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["clubKey"] = v.clubKey;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["createdTs"] = v.createdTs;
    j["description"] = v.description;
    j["role"] = v.role;
    j["permissionMap"] = v.permissionMap;
    j["name"] = v.name;
    j["tag"] = v.tag;
    j["motd"] = v.motd;
    j["jid"] = v.jid;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>();
    v.createdTs = j.at("createdTs").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.role = j.at("role").get<std::string>();
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
    v.name = j.at("name").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.motd = j.at("motd").get<std::string>();
    v.jid = j.at("jid").get<std::string>();
  }
  inline std::string to_string(const ClubDataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
