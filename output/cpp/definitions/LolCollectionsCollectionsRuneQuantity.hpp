#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantity_t {
    int32_t quantity;
    uint32_t runeId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneQuantity_t& v) {
    j["quantity"] = v.quantity;
    j["runeId"] = v.runeId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneQuantity_t& v) {
    v.quantity = j.at("quantity").get<int32_t>();
    v.runeId = j.at("runeId").get<uint32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRuneQuantity_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
