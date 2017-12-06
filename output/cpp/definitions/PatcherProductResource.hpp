#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentResource.hpp"
namespace leagueapi {
  struct PatcherProductResource_t {
    std::vector<PatcherComponentResource_t> components;
    std::string id;
    std::optional<uint32_t> refresh_period;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductResource_t& v) {
    j["components"] = v.components;
    j["id"] = v.id;
    if(v.refresh_period)
      j["refresh_period"] = *v.refresh_period;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductResource_t& v) {
    v.components = j.at("components").get<std::vector<PatcherComponentResource_t>>();
    v.id = j.at("id").get<std::string>();
    if(auto it = j.find("refresh_period"); it != j.end() !it->is_null())
      v.refresh_period = it->get<uint32_t>();
  }
}
