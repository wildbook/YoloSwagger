#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSlotEntry_t {
    uint32_t_t runeId;
    uint32_t_t runeSlotId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSlotEntry_t& v) {
    j["runeId"] = v.runeId;
    j["runeSlotId"] = v.runeSlotId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSlotEntry_t& v) {
    v.runeId = j.at("runeId").get<uint32_t_t>();
    v.runeSlotId = j.at("runeSlotId").get<uint32_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsSlotEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
