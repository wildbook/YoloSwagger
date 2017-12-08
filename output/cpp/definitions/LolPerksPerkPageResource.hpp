#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkPageResource_t {
    int32_t subStyleId;
    std::string name;
    bool isEditable;
    bool isValid;
    int32_t order;
    std::vector<int32_t> selectedPerkIds;
    int32_t formatVersion;
    int32_t primaryStyleId;
    int32_t id;
    bool isActive;
    bool isDeletable;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkPageResource_t& v) {
    j["subStyleId"] = v.subStyleId;
    j["name"] = v.name;
    j["isEditable"] = v.isEditable;
    j["isValid"] = v.isValid;
    j["order"] = v.order;
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["formatVersion"] = v.formatVersion;
    j["primaryStyleId"] = v.primaryStyleId;
    j["id"] = v.id;
    j["isActive"] = v.isActive;
    j["isDeletable"] = v.isDeletable;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkPageResource_t& v) {
    v.subStyleId = j.at("subStyleId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.isEditable = j.at("isEditable").get<bool>();
    v.isValid = j.at("isValid").get<bool>();
    v.order = j.at("order").get<int32_t>();
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>();
    v.formatVersion = j.at("formatVersion").get<int32_t>();
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>();
    v.id = j.at("id").get<int32_t>();
    v.isActive = j.at("isActive").get<bool>();
    v.isDeletable = j.at("isDeletable").get<bool>();
  }
  inline std::string to_string(const LolPerksPerkPageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
