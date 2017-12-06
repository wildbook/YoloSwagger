#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    std::string clubKey;
    int64_t createdTs;
    std::string description;
    std::string jid;
    int64_t lastModifiedTs;
    std::string motd;
    std::string name;
    ClubPermissions_t permissionMap;
    std::string role;
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["clubKey"] = v.clubKey;
    j["createdTs"] = v.createdTs;
    j["description"] = v.description;
    j["jid"] = v.jid;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["motd"] = v.motd;
    j["name"] = v.name;
    j["permissionMap"] = v.permissionMap;
    j["role"] = v.role;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.createdTs = j.at("createdTs").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.jid = j.at("jid").get<std::string>();
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>();
    v.motd = j.at("motd").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
    v.role = j.at("role").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
  }
}
