#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2Honor_t {
    std::string honorCategory;
    std::string voterRelationship;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Honor_t& v) {
    j["honorCategory"] = v.honorCategory;
    j["voterRelationship"] = v.voterRelationship;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Honor_t& v) {
    v.honorCategory = j.at("honorCategory").get<std::string>();
    v.voterRelationship = j.at("voterRelationship").get<std::string>();
  }
}
