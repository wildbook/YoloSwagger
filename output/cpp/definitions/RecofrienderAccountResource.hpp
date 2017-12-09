#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderActionResource.hpp"
namespace leagueapi {
  struct RecofrienderAccountResource_t {
    std::vector<RecofrienderActionResource_t> contacts;
    std::string platformId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderAccountResource_t& v) {
    j["contacts"] = v.contacts;
    j["platformId"] = v.platformId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderAccountResource_t& v) {
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource_t>>();
    v.platformId = j.at("platformId").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderAccountResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
