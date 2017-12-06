#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicRosterDTO_t {
    std::string shortName;
    int32_t logoColor;
    std::string name;
    int64_t id;
    int32_t logo;
    std::vector<uint64_t> memberIds;
  };

  inline void to_json(nlohmann::json& j, const PublicRosterDTO_t& v) {
    j["shortName"] = v.shortName;
    j["logoColor"] = v.logoColor;
    j["name"] = v.name;
    j["id"] = v.id;
    j["logo"] = v.logo;
    j["memberIds"] = v.memberIds;
  }

  inline void from_json(const nlohmann::json& j, PublicRosterDTO_t& v) {
    v.shortName = j.at("shortName").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>();
  }
}
