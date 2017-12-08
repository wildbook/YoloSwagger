#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  struct RecofrienderContactResource_t {
    std::string_t name;
    std::string_t imageUrl;
    std::string_t displayState;
    std::string_t source;
    RecofrienderFriendState_t friendState;
    std::string_t action;
    uint64_t_t summonerId;
    int64_t_t recommendScore;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource_t& v) {
    j["name"] = v.name;
    j["imageUrl"] = v.imageUrl;
    j["displayState"] = v.displayState;
    j["source"] = v.source;
    j["friendState"] = v.friendState;
    j["action"] = v.action;
    j["summonerId"] = v.summonerId;
    j["recommendScore"] = v.recommendScore;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource_t& v) {
    v.name = j.at("name").get<std::string_t>();
    v.imageUrl = j.at("imageUrl").get<std::string_t>();
    v.displayState = j.at("displayState").get<std::string_t>();
    v.source = j.at("source").get<std::string_t>();
    v.friendState = j.at("friendState").get<RecofrienderFriendState_t>();
    v.action = j.at("action").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.recommendScore = j.at("recommendScore").get<int64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const RecofrienderContactResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
