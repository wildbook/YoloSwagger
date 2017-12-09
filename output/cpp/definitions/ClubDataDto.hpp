#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    int64_t lastModifiedTs;
    std::string jid;
    ClubPermissions_t permissionMap;
    int64_t createdTs;
    std::string description;
    std::string role;
    std::string name;
    std::string clubKey;
    std::string motd;
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["jid"] = v.jid;
    j["permissionMap"] = v.permissionMap;
    j["createdTs"] = v.createdTs;
    j["description"] = v.description;
    j["role"] = v.role;
    j["name"] = v.name;
    j["clubKey"] = v.clubKey;
    j["motd"] = v.motd;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>();
    v.jid = j.at("jid").get<std::string>();
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
    v.createdTs = j.at("createdTs").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.role = j.at("role").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.motd = j.at("motd").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
  }
  inline std::string to_string(const ClubDataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
