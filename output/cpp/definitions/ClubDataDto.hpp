#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    std::string role;
    std::string name;
    std::string clubKey;
    std::string tag;
    std::string motd;
    std::string description;
    std::string jid;
    int64_t lastModifiedTs;
    int64_t createdTs;
    ClubPermissions_t permissionMap;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["role"] = v.role;
    j["name"] = v.name;
    j["clubKey"] = v.clubKey;
    j["tag"] = v.tag;
    j["motd"] = v.motd;
    j["description"] = v.description;
    j["jid"] = v.jid;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["createdTs"] = v.createdTs;
    j["permissionMap"] = v.permissionMap;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.role = j.at("role").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.motd = j.at("motd").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.jid = j.at("jid").get<std::string>();
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>();
    v.createdTs = j.at("createdTs").get<int64_t>();
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
  }
}
