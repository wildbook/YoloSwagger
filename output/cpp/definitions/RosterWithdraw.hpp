#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterWithdraw_t {
    std::vector<int64_t> declineWithdrawMembers;
    int64_t gameStartBufferMs;
    uint64_t initVoteMember;
    int64_t initVoteTime;
    int64_t lockoutTimeMs;
    int64_t voteTimeoutMs;
    std::vector<int64_t> voteWithdrawMembers;
  };

  inline void to_json(nlohmann::json& j, const RosterWithdraw_t& v) {
    j["declineWithdrawMembers"] = v.declineWithdrawMembers;
    j["gameStartBufferMs"] = v.gameStartBufferMs;
    j["initVoteMember"] = v.initVoteMember;
    j["initVoteTime"] = v.initVoteTime;
    j["lockoutTimeMs"] = v.lockoutTimeMs;
    j["voteTimeoutMs"] = v.voteTimeoutMs;
    j["voteWithdrawMembers"] = v.voteWithdrawMembers;
  }

  inline void from_json(const nlohmann::json& j, RosterWithdraw_t& v) {
    v.declineWithdrawMembers = j.at("declineWithdrawMembers").get<std::vector<int64_t>>();
    v.gameStartBufferMs = j.at("gameStartBufferMs").get<int64_t>();
    v.initVoteMember = j.at("initVoteMember").get<uint64_t>();
    v.initVoteTime = j.at("initVoteTime").get<int64_t>();
    v.lockoutTimeMs = j.at("lockoutTimeMs").get<int64_t>();
    v.voteTimeoutMs = j.at("voteTimeoutMs").get<int64_t>();
    v.voteWithdrawMembers = j.at("voteWithdrawMembers").get<std::vector<int64_t>>();
  }
}
